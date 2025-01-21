from MountainBike import MountainBike

class DemoBike:
    def __init__(self):
        self.mountainBike = MountainBike()
        
    
    def Bike(self):
        self.mountainBike.setSpeed(12)
        self.mountainBike.setGear(2)
        self.mountainBike.setCadence(4)
        self.mountainBike.setHeigth(2)
        self.mountainBike.printLine()
    
if __name__ == "__main__":
    
    demo_bike = DemoBike()
    
    demo_bike.Bike()
    