import statistics
import math
classes=[(0,10),(10,20),(20,30),(30,40),(40,50),(50,60),(60,70),(70,80)]
frequencies=[5,10,20,30,40,30,20,10,5]
midpoint=[(c[0]+c[1])/2 for c in classes]
weigthed_sum=sum(f*m for f, m in zip(frequencies,midpoint))
tot_frequency=sum(frequencies)
mean=weigthed_sum/tot_frequency
variance=sum(f*(m-mean)**2 for f, m in zip (frequencies,midpoint))/tot_frequency
std_dev=math.sqrt(variance)
coef_of_var=(std_dev/mean)*100
print(f"\nmean:{mean}")
print(f"standard deviation:{std_dev}")
print(f"coefficient of variance:{coef_of_var}%")