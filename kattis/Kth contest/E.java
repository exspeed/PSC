import java.util.Scanner;
import java.util.*;


public class E{
    public static void main(String[] args){
	Scanner sc = new Scanner(System.in);
	int N = sc.nextInt();
	int M = sc.nextInt();
	sc.nextLine();
	int total = 0;
	String [] coast = new String[N];
	for (int i = 0; i < N; i++){
	    String row = sc.nextLine();
	    coast[i]= row;
	}

	int [][] arr = new int [N+2][M+2];
	for(int i = 1; i < N+1; i++){
	    for(int j = 1; j< M+1; j++){
		if(coast[i-1].charAt(j-1) == '1'){
		    arr[i][j] = 1;
		}
	    }
	}
	int dx [] = new int[]{0, 0, -1, 1};
	int dy [] = new int[]{1, -1, 0, 0};

	boolean [][] visited = new boolean [N+2][M+2];
	Queue<pair> que = new ArrayDeque<>();
	que.add(new pair(0,0));
	visited[0][0] = true;
	while(!que.isEmpty()){
	    pair p = que.remove();
	    for(int i = 0; i < 4; i++){
		if (p.a + dx[i] >= 0 && p.a +dx[i] < N+2 && p.b +dy[i] >= 0 && p.b+dy[i] < M+2){
		    if(arr[p.a + dx[i]][p.b + dy[i]] == 1){
			total++;
		    }
		    if(arr[p.a+dx[i]][p.b+dy[i]] == 0 && visited[p.a+dx[i]][p.b+dy[i]] == false){
			visited[p.a+dx[i]][p.b+dy[i]] = true;
			que.add(new pair(p.a + dx[i], p.b + dy[i]));
		    }
		}
	    }
	}

	System.out.println(total);

    }
    public static class pair{
	public int a;
	public int b;
	pair(int a, int b){
	    this.a = a;
	    this.b = b;
	}
    }

}


