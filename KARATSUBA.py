def karatsuba(x,y):
    if(len(str(x))<10 or len(str(y))<10):
        return x*y
    n=max(len(str(x)),len(str(y)))
    m=n/2
    a=x/10**m
    b=x%10**m
    c=y/10**m
    d=y%10**m
    
    
    ac=karatsuba(a,c)
    bd=karatsuba(b,d)
    q=karatsuba(a+b,c+d)

    prod = ac* 10**n +bd + q* 10**m
    return prod
answer=karatsuba(1234,5678)
print(answer)

    
          
    
    
