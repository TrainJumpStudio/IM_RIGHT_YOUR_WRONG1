
public class Main{

    public static long[] createAndSumArr(int x){
        //start clock
        long start = System.currentTimeMillis();

        //array for storing vals
        long[] arr = new long[x];

        //adds i values
        for(int i = 0; i < x; i++){
            arr[i] = i;
        }

        //get sum
        long arrSum = 0;

        for(long num : arr){
            
            arrSum+=num;

        }

        return new long[] {arrSum, System.currentTimeMillis()-start};


    }

    public static void main(String[] args){
    
        
        long[] res = createAndSumArr(100000000);

        System.out.println("Sum -> " + res[0] +", Time -> "+ (res[1]/1000.0));    


    }

}