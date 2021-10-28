public class Bubble {

    public static void main(String[] args) {
        Bubble ob1 = new Bubble();
        int arr[] = {64, 34, 25, 12, 22, 11, 90};
        ob1.bubbleSort(arr);
        System.out.println("This is the Sorted array");
        ob1.displayArray(arr);
    }

    void bubbleSort(int arr[]) {
        int a = arr.length;
        for (int i = 0; i < a - 1; i++) {
            for (int j = 0; j < a - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    void displayArray(int arr[]) {
        int a = arr.length;
        for (int i = 0; i < a; ++i) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}