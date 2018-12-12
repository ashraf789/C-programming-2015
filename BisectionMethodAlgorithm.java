public class Main {
 
    /**
     * problem : Bisection method
     * Developer : Syed ashraf ullah
     * Email : syedashrafullah15@gmail.com
     * Date : 01.06.17
     * web = lazycoder.6te.net
     *  
     * */
   
   
   
    public static float bisectionRange;
    public static void main(String[] args) {
   
        float upper = 0;//Au
        float lower = 2;//Al
        bisectionRange = 25;//iteration Limit
       
       
        float priviousMid = 0;
        float presentMid = 0;
       
        biSection(bisectionRange,upper,lower,presentMid,presentMid);
       
    }
   
    //this is a recursive function it will call itself until find out last value of iteration range
   
    public static float biSection(float range,float upper,float lower,float previousMid,float presentMid){
       
 
        if(previousMid != 0){//show information
            System.out.println("Iteration "+(bisectionRange-range)+" : ");
            System.out.println("\t Mid = "+presentMid);
            System.out.println("\t Error = "+errorCount(presentMid, previousMid)+"%");
        }else if(range != bisectionRange){
            System.out.println("Iteration "+(bisectionRange-range)+" : ");
            System.out.println("\t Mid = "+presentMid);
            System.out.println("\t Error =  can,t calculate error until 2nd iteration");
        }
       
        if (range == 0) {//when we reach our final iteration this recursive function will be close
            return presentMid;
        }
       
        float fUpper = f(upper);//f(Au)
        float fLower = f(lower);//f(Al)
       
        float valueMid = (upper+lower)/2;//Am
        float fMid = f(valueMid);//f(Am)
       
        if (fMid*fLower > 0) {//f(Am)*f(al)>0
            upper = valueMid;
        }else{                  //f(Am)*f(al)<0
            lower = valueMid;
        }
        range--;//decrease iteration range
        return biSection(range,upper,lower,presentMid,valueMid);//calling its own method
       
    }
   
    public static float errorCount(float presentMid,float previousMid){
        float value = ((presentMid - previousMid)/presentMid)*100;
        if (value < 0 ) {
            return value*(-1);
        }else{
            return value;
        }
    }
   
    public static float f(float valueOfX){
       
        //function was f(a) = x^6-x-1;
       
        float x = 1;
        for (int i = 0; i < 6; i++) {
            x*=valueOfX;//calculating x^6
        }
       
        return x-valueOfX-1;
    }
 
}
