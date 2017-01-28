import java.util.Scanner;

public class G{
    public static void main(String[] args){
	Scanner sc = new Scanner (System.in);
	int i = 1;
	while(sc.hasNextInt()){
	long a = sc.nextInt();
	long b = sc.nextInt();
	long c = sc.nextInt();
	long d = sc.nextInt();
	long aids = (a*d - b*c);
	System.out.println("Case " + i + ":");
	System.out.println(d/aids + " " + (b*-1)/aids);
	System.out.println((c*-1)/aids + " " + a/(aids));
	i++;
	}

    }
}


