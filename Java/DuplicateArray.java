public class DuplicateArray {
    static boolean DuplicateFun(int[] data)
    {
      
        for(int i = 0;i<data.length;i++)
        {
            for(int j = i + 1;j<data.length;j++)
            {
                if(data[i]==data[j]){
                    return true;
                }
                
            }
        }
        return false;
      
    }
  
    public static void main(String args[])
    {
        int arr []=  {9,9,8,2,7};
       System.out.print( DuplicateFun(arr));
        
    }
} 
