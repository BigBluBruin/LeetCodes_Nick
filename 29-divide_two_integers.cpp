class Solution {
public:
    int divide(int dividend, int divisor) {
        bool flag=false, flag2=true;
        if((dividend>0 and divisor<0) or (dividend<0 and divisor>0))
            flag=true;
         if (dividend<0)
            flag2=false;

        

        int count=0;
        while (true)
        {
            if(flag)
            {
                dividend+=divisor;

            }
            else
            {
                dividend-=divisor;
            }
            
            if(flag2 and dividend>=0)
            {
                count++;
            }
            else if(~flag2 and dividend<=0)
            {
                count++;
            }
            else
            {
                break;
            }
        }

        if(flag)
            count=-count;

        return count;
        
    }
};