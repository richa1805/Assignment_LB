class Logic
{
    int iCnt = 0; 
    void printReverse(int iNum)
    {
       
       for(iCnt = iNum; 1<=iCnt;iCnt--)
       {
            System.out.println(iCnt);    
       }
    }
        
}

class Assignment_20_2
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.printReverse(10);

    }
}
