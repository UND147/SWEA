import java.util.Scanner;
import java.util.Stack;
import java.util.Arrays;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.ArrayList;
import java.util.Collections;
public class App {
    public static void main(String[] args) throws Exception {
        // Scanner sc = new Scanner(System.in);
        // int[] arrays = new int[5];
        // for(int i=0; i<arrays.length;++i){
        //     arrays[i] = sc.nextInt();
        // }
        // 배열전용 클래스
        // Arrays.sort(arrays);
        // System.out.print(Arrays.toString(arrays));
        // System.out.print("\n");
        // //내림차순 정렬
        // Integer[] numbers = {5, 2, 8, 1, 3};
        // Arrays.sort(numbers,Comparator.reverseOrder());
        // System.out.print(Arrays.toString(numbers));
        // sc.close();
        //
        // ArrayList<Integer> list = new ArrayList<>();
        // list.add(1);
        // list.add(25);
        // list.add(532);
        
        // System.out.println(list);
        // Collections.sort(list, Comparator.reverseOrder());
        // System.out.println(list);
        // Collections.reverse(list);
        // System.out.println(list);
        // list.remove(1);
        // System.out.print(list);
        //
       Stack<Integer> st = new Stack<>();
       st.add(1);
       st.add(2);
       System.out.println(st);
       st.push(5);
       System.out.println(st);
       st.pop();
       System.out.println(st);
       st.clear();
       System.out.println(st);
        
       Queue<Integer> qu = new LinkedList<>();
       qu.add(1);
       System.out.println(qu);
        
    }
}
