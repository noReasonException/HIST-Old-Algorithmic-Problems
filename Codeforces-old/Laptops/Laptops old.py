laptops_number = int(input(""))
price = []
quality = []
Data_list_final = []
for price_and_quality_data in range(laptops_number):
    Data_in_String = input()
    price.append(int(Data_in_String[0]))
    quality.append(int(Data_in_String[2]))

Data_list_final = sorted(zip(price,quality))


for check_index in range(laptops_number):
    try:
        if Data_list_final[check_index][0] < Data_list_final[check_index+1][0] \
           and Data_list_final[check_index][1] > Data_list_final[check_index+1][1]:
            print("Happy Alex")
            break
    except IndexError:
        print("Poor Alex")
    

        
    
