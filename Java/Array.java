package SecondDay;
import java.util.Scanner;
// array
public class Array{
// function for taking input of elements of an array
 public static void input(int marks[]){
    Scanner sc = new Scanner(System.in);
    for(int i =0;i<marks.length;i++){

        marks[i]= sc.nextInt();
    }
 }
 public static void output(int marks[]){

    for(int i =0;i<marks.length;i++){
System.out.print(  marks[i]);
    }
 }

// function for linear search
public static void lsearch(int arr[],int search){
    int i;
    for(i=0;i<arr.length;i++){
        if(search==arr[i])
            System.out.println("The Index Is  " + i);
            break;
        }
    }


// function for finding the maximu elemnt in the array
public static void max(int[] arr){
    int max = arr[0];
    for(int i=0;i<arr.length;i++){
        if(arr[i]>max){
            max=arr[i];

    }

    }
    System.out.println(("maximu number in the given arr is  "+ max ));
}

// code for binary seacrh
public static void binarysearch (int nums[],int key){
int start = 0,end=nums.length-1;
int middle =  (start+end)/2;

while(middle!=start||middle!=end){
    if(nums[middle]==key){
    System.out.println("Key Find Succ at:-  " + middle);
    break;
    }
    else if(nums[middle]<key){
    start= middle+1;
   middle =  (start+end)/2;
    }else{
       end=middle-1;
       middle =  (start+end)/2;
    }
}
}

// reverse the array
public static void reverse(int [] arr){
    int i=0;
        int temp;
while(i<arr.length/2){
temp=arr[i];
arr[i]=arr[(arr.length-1)-i];
arr[(arr.length-1)-i]= temp;
i++;
}
output(arr);
}
// print the pairs in the array
public static void pairs(int arr[]){
    int i=0;
    while(i<arr.length){
        int j=i;
        while(j<arr.length){
   System.out.println("One Of The Pairs is (" + arr[i] +"," + arr[j] +")");
   j++;
        }
        i++;
    }
}
// printing all the subarray of an array 
public static void subarray(int arr[]){
int i=0;
// start with a[0];
while(i<arr.length){
    int j=i;
    
    while(j<arr.length){
        int k=i;
while(k<=j){
System.out.print( +arr[k] +",");
k++;
}
j++;
System.out.println();
    }
    i++;
}

}


// printing the sum of the subarray which having the maximum sum
public static void maxsubarray(int num[]){
int i=0,max=0;
    while(i<num.length){
        int j=i;
        while(j<num.length){
            int k=i,sum=0;
            while(k<=j){
            sum+=num[k];
            k++;
            }
         if(sum>max){
         max=sum;
         }
         j++;
        }
        i++;
    }
    System.out.println("the maximum sum of subarray is : "+ max);
}
// kadans algorith
public static void  kadans(int nums[]){
int count_sum=0,max_sum=Integer.MIN_VALUE,j=0;
while(j<nums.length){
count_sum+= nums[j];
if(count_sum<0){
    count_sum=0;
}
if(count_sum>max_sum){
    max_sum=count_sum;
}
j++;
}
System.out.println("Maximus Sum Of The Given SubArray Is :" + max_sum);
}

// Bubble Sorting
public static void bubblesort(int [] arr){
int i=0;
while(i<arr.length){
 int j=i+1;
 while(j<arr.length){
    if(arr[j]<arr[i]){
        int temp= arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
    j++;

 }
i++;
}

}

// selection sort 
public static void selectionsort(int arr[]){
int i=0,smallest=Integer.MAX_VALUE;
while(i<arr.length){
 if(smallest>arr[i]){
    
 }
}
}
// merge sorted array
public static void merge(int[] nums1, int m, int[] nums2, int n) {
    int a1=0,a2=0;
    int arr[]= new int[n+m];
for(int i=0;i<n+m;i++){
    if(a1<m&&a2<n){
        if(nums1[a1]>nums2[a2]){
     arr[i]=nums2[a2];
     a2++;
     continue;
        }
        else  if(nums1[a1]<nums2[a2]){
        arr[i]=nums1[a1];
     a1++;
          continue;

        } 
      else  if(nums1[a1]==nums2[a2])
        {
         arr[i]=nums1[a1];
         i++;
         arr[i]=nums2[a2];
         a1++;
         a2++;
              continue;

        }
    }
   if(a1==m-1){
 arr[i]=nums2[a2];
        a2++;
        continue;
    }
    if(a2==n-1){
         arr[i]=nums1[a1];
        a1++;
    }


}
    output(arr);

}

// insertion sort
public static void insertionsort(int arr[]){
    int i=1;
while(i<arr.length){
 int j=0;
 while(j<i){
 if(arr[i]<arr[j]){
int temp;
temp= arr[i];
arr[i]=arr[j];
arr[j]=temp;
 }
 j++;
 }
i++;
}
}

 public static void main(String[] arg){
    // array of 5 integers
    // int [] arr1 = new int[5];
    // int arr[] = new int[6];
    // int bts[]=new int[5];
    // int bts2[]= new int[3];
    // input(bts);
        // System.out.println("1nd  Array is");

    // System.out.println("2nd  Array is");
    // input(bts2);
int a=2;
int b=4;
System.out.println(a^b);
    // System.out.println("Mereged  Array is");
//    merge(bts,5, bts2,3);

    // output(bts);
    // reverse(bts);
// pairs(bts);
// maxsubarray(bts);
// kadans(bts);
    // binarysearch(bts,5);
// bubblesort(bts);
// insertionsort(bts);
// output(bts);


 }
}