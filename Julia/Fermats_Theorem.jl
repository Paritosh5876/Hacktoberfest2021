#Fermats Theorem
#https://en.wikipedia.org/wiki/Fermat%27s_little_theorem

Fermat's little theorem is the basis for the Fermat primality test and is one of the fundamental results of elementary number theory. The theorem is named after Pierre de Fermat, who stated it in 1640. It is called the "little theorem" to distinguish it from Fermat's Last Theorem.[3]

function checkfermat(a::Int64,b::Int64,c::Int64,n::Int64)
    if (a^n) + (b^n) == (c^n)
        return (0)
    elseif (a^n)+(b^n) != (c^n)
        return (1)
    end
end


a=Array(1:50)
function check_(x::Array{Int64,1})
    o=0
    for a in x
        for b in x
            for c in x
                for n in x
                    q=checkfermat(a,b,c,n)
                    o=o+1
                    if q==0
                        if n>2
                            println("Theorem Proved WRONG")
                            println(a,'@',b,'@',c,'@',n)
                        end
                    end
                end
            end
        end
    end
    println(o)
end

check_(a)
