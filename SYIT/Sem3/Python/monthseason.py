month=input("Enter Month: ")
day=int(input("Enter Days: "))
if month in ('January','Feb','March'):   
    season='winter'
elif month in ('April','May','June'):
            season='spring'
elif month in ('July','Aug','Sept'):
                season='summer'
else:
                    season='autumm'
if(month=='March') and (day>19):
                        season='spring'
elif (month=='June') and (day>20):
                            season='summer'
elif (month=='September') and (day>21):
                            season='autumm'
elif (month=='December') and (day>20):
                            season='winter'
print("Season is: ", season)
                            
