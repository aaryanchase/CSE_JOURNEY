while True:
    light = input("Enter traffic light:").lower()
    if(light=="red" or light=="yellow" or light=="green"):
        speed=int (input("Enter Vehicles Speed:"))
    # light=light_name.lower() 
    if(light=="red"):
        if(speed>0):
            print("🛑 STOP YOUR VEHICLE IMMEDIATELEY !!! ")
        else:
            print("Vehicle is already stopped.")
        break

    elif(light=="green"):
        print("go go go ...")
        break

    elif(light=="yellow"):
        if(speed>30):
            print("🟡 SLOW DOWN YOUR VEHICLE 🚗")
        else:
            print("Be ready to go...")
        break

    else:
        print("🛑 INVALID TRAFFIC LILGHT ! , Enter Red , Green , Yellow only.")

print ("PROGRAM FINISHED...😁")


