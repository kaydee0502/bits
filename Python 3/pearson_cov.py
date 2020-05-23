# -*- coding: utf-8 -*-
"""
Created on Tue May  5 12:49:50 2020

@author: KayDee
"""
import matplotlib.pyplot as plt

if __name__ == "__main__":
    
    def covariance(x,y):
        mean_data1 = sum(x)/len(x)
        mean_data2 = sum(y)/len(y)
        cov = 0
        for i in range(len(x)):
            cov += (x[i]-mean_data1)*(y[i]-mean_data2)
        return cov/len(x)
    
    def standard_deviation(x):
        mean_data = sum(x)/len(x)
        dev = 0
        for i in range(len(x)):
            dev += (x[i]-mean_data)**2
        dev = (dev/len(x))**0.5
        return dev
        
    
    data1 = [15,17,19,20,23,20,21,28,29,35]
    
    data2 = [1,40,20,100,50,75,25,0,99,10]
    
    
    
    cov = covariance(data1,data2)
    std1 = standard_deviation(data1)
    std2 = standard_deviation(data2)
    denominator = std1*std2
    rho = cov/denominator
    print(rho)
    
    if rho > 0.8:
        leg = "High positive correlation"
        print("High positive correlation")
    elif rho > 0.6:
        leg = "Moderate positive correlation"
        print("Moderate positive correlation")
    elif rho > 0.3:
        leg = "Low positive correlation"
        print("Low positive correlation")
    elif rho > -0.3:
        leg = "Negligible correlation"
        print("Negligible correlation")
    elif rho < -0.8:
        leg = "High negetive correlation"
        print("High negetive correlation")
    elif rho < -0.6:
        leg = "Moderate negetive correlation"
        print("Moderate negetive correlation")
    elif rho < -0.3:
        leg = "Low negetive correlation"
        print("Low negetive correlation")
        
        
plt.figure(figsize=(6,4))
plt.title('Pearson\'s coefficient')
plt.scatter(data1,data2)
plt.xlabel('x')
plt.ylabel('y')
plt.text(max(data1)-7,min(data2)-6,leg)
plt.text(max(data1)-7,min(data2)-8,rho)
plt.show()