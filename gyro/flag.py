import math

def flag_get(ax,ay,az): 
    if ax<0:
        flag1=0
    if ax>=0:
        flag1=1
    if ay<0:
        flag2=0
    if ay>=0:
        flag2=1
    
    print("f1={0},f2={1}".format(flag1,flag2))



    if flag1==0 and flag2==1:
        pitch = -math.atan(ax / math.sqrt( ay* ay+ az*az ) ) * 57.324
        print("----1----")
    elif flag1==0 and flag2==0:
        pitch = 180+math.atan(ax / math.sqrt( ay* ay+ az*az ) ) * 57.324
        print("----2----")
    elif flag1==1 and flag2==0:
        pitch = 180+math.atan(ax / math.sqrt( ay* ay+ az*az ) ) * 57.324
        print("----3----")
    elif flag1==1 and flag2==1:
        pitch = 360-math.atan(ax / math.sqrt( ay* ay+ az*az ) ) * 57.324
        print("----4----")
        
    return pitch
        
        
