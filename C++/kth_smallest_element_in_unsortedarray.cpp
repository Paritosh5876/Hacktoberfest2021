#include <climits>
#include <iostream>
using namespace std;


void swap(int* x, int* y);


class MaxHeap {
	int* harr; 
	int capacity; 
	int heap_size; 
public:
	MaxHeap(int a[], int size); 
	void maxHeapify(int i); 
	int parent(int i) { return (i - 1) / 2; }
	int left(int i) { return (2 * i + 1); }
	int right(int i) { return (2 * i + 2); }

	int extractMax(); 
	int getMax() { return harr[0]; } 

	
	void replaceMax(int x)
	{
		harr[0] = x;
		maxHeapify(0);
	}
};

MaxHeap::MaxHeap(int a[], int size)
{
	heap_size = size;
	harr = a; // store address of array
	int i = (heap_size - 1) / 2;
	while (i >= 0) {
		maxHeapify(i);
		i--;
	}
}


int MaxHeap::extractMax()
{
	if (heap_size == 0)
		return INT_MAX;

	
	int root = harr[0];

	
	if (heap_size > 1) {
		harr[0] = harr[heap_size - 1];
		maxHeapify(0);
	}
	heap_size--;

	return root;
}


void MaxHeap::maxHeapify(int i)
{
	int l = left(i);
	int r = right(i);
	int largest = i;
	if (l < heap_size && harr[l] > harr[i])
		largest = l;
	if (r < heap_size && harr[r] > harr[largest])
		largest = r;
	if (largest != i) {
		swap(&harr[i], &harr[largest]);
		maxHeapify(largest);
	}
}


void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}


int kthSmallest(int arr[], int n, int k)
{
	
	MaxHeap mh(arr, k);

	
	for (int i = k; i < n; i++)
		if (arr[i] < mh.getMax())
			mh.replaceMax(arr[i]);

	// Return root
	return mh.getMax();
}
int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int n = sizeof(arr) / sizeof(arr[0]), k = 4;
	cout << "K'th smallest element is: " << kthSmallest(arr, n, k);
	return 0;
}

