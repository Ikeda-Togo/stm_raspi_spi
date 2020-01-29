def flag_get(ay,ax): 
    if ax<0:
        flag1=0
    if ax>=0:
        flag1=1
    if ay<0:
        flag2=0
    if ay>=0:
        flag2=1



    if flag1==0 & flag2==1:
        ax=-ax
    if flag1==0 & flag2==0:
        print("----2----")
        ax=2-ax
    if flag1==1 & flag2==0:
        ax=2+ax
    if flag1==1 & flag2==1:
        ax=4-ax