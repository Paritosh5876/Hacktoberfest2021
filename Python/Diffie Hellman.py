#The Diffie-Hellman algorithm is being used to establish a shared secret
#that can be used for secret communications while exchanging data over a
#public network using the elliptic curve to generate points and get the secret key using the parameters
if __name__ == '__main__':
    #Public Keys P and G
    P = int(input("Enter Public Key P: "))
     
    
    G = int(input("Enter Public Key G: "))
     
     
    # Alice will choose the private key a
    a = int(input("Enter Private Key for Alice: "))

    # Bob will choose the private key b
    b = int(input("Enter Private Key for Bob: "))
   
    # gets the generated key
    ga = int((G**a)%P)   

       
    # gets the generated key
    gb = int((G**b)%P)   

    print("Exchanging Generated Keys") 
     
    # Secret key for Alice 
    ka = int((gb**a)%P)
     
    # Secret key for Bob 
    kb = int((ga**b)%P)
     
    print('Secret key for the Alice is : %d'%(ka))
    print('Secret Key for the Bob is : %d'%(kb))
