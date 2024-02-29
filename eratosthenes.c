int prime[1000];
void seive()
{
    
    for (size_t i = 0; i < 1000; i++)
    {
        prime[i] = 1;
        prime[0] = prime[1] = 0;
    }
    for (size_t i = 2; i < sqrt(1000); i++)
    {
        if (prime[i])
        {
            for (size_t j = i*i; i < 1000; j+=i)
            {
                prime[j] = 0;
            }  
        }
        
    }
    
    
}
