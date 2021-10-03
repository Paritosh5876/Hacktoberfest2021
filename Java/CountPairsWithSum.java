import java.util.*;

public class CountPairsWithSum
{
    private static int countPairsSolution(ArrayList<Integer> list, int n, int k)
    {
        // Brute force solution:
//        int count = 0;
//        for (int i = 0; i < n; i++) {
//            for (int j = i + 1; j < n; j++) {
//                if ((list.get(i) + list.get(j)) == k)
//                    count++;
//            }
//        }
//        return count;

        // Optimised solution:
        HashMap<Integer, Integer> map = new HashMap<>();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (map.containsKey(k - list.get(i)))
                ans = ans + map.get(k - list.get(i));
            if (map.containsKey(list.get(i)))
                map.put(list.get(i), map.get(list.get(i)) + 1);
            else
                map.put(list.get(i), 1);
        }
        return ans;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();

        ArrayList<Integer> list = new ArrayList<Integer>();

        for (int i = 0; i < n; i++) {
            list.add(sc.nextInt());
        }
        System.out.println(countPairsSolution(list, n, k));
    }
}
