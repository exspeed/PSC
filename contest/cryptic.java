
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
public class cryptic{
    public static void main(String[] args){
	Scanner sc = new Scanner (System.in);

	int tc = sc.nextInt();
	for(int z= 0; z < tc; z++){
	    int n = sc.nextInt();
	    int m = sc.nextInt();
	    sc.nextLine();
	    String[] acronym = sc.nextLine().split(" ");
	    String [] word = new String[m];
	    for(int i = 0; i < m; i++){
		word[i] = sc.nextLine();
	    }

	    boolean done = false;
	    char a = acronym[0].charAt(0), b = '1';
	    int aCount = 0, bCount = 0;
	    for(int i = 0; i < acronym.length; i++){
		if(acronym[i].charAt(0) != a && b == '1'){
		    b = acronym[i].charAt(0);
		    b++;
		    }
		else if(acronym[i].charAt(0) == b)
		    bCount++;
		else if(acronym[i].charAt(0) == a)
		    aCount++;
		else{
		    done = true;
		    break;
		}
	    }

	    if(done || b == '1')
		System.out.println("No cryptic-friendly acronym");
	    else{
		if(n > m){
		    System.out.println("No cryptic-ordered fragment");
		    continue;
		}
		ArrayList<String> aList = new ArrayList<String>();
		ArrayList<String> bList = new ArrayList<String>();
		for(int i = 0; i < m; i++){
		    if(word[i].charAt(0) == a){
			bCount--;
			bList.add(word[i]);
		    }
		    else{
			aCount--;
			aList.add(word[i]);
		    }
		}
		if(bCount > 0 || aCount > 0){
		    System.out.println("No cryptic-ordered fragment");
		    continue;
		}
		Collections.sort(bList);
		Collections.sort(aList);

		int j = 0,k =0;
		for(int i = 0; i < acronym.length; i++){
		    if(acronym[i].charAt(0) == a){
			System.out.print(aList.get(j)+ " ");
			j++;
		    }else{
			System.out.print(bList.get(k)+ " ");
			k++;
		    }
			
		}
		System.out.println();
		
	    }
	}
    }
}
