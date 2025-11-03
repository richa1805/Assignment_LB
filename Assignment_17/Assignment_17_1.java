class Logic
{
   int iDigit = 0;
   int iSum = 0;
    
    
    void sumOfDigit(int num)
    { 
        
        while(1<=num)
        {
            iDigit = num % 10;
            num = num / 10;
            iSum = iSum + iDigit;
        }
        System.out.println(iSum);
    }
}

class Assignment_17_1
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.sumOfDigit(1234);

    }
}