class Logic
{
   int iDigit = 0;
   int iCount = 0;
    
    
    void reverseNumber(int num)
    { 
        
        while(1<=num)
        {
            iDigit = num % 10;
            num = num / 10;
            iCount++;
        }
        System.out.println(iCount);
    }
}

class Assignment_16_5
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.reverseNumber(78659);

    }
}