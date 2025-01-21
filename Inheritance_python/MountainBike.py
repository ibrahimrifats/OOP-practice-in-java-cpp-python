from Bicycle import Bicycle

class MountainBike(Bicycle):
    def __init__(self):
        super().__init__()
        self.seatHeight = 0
        
    def setHeigth(self, newValue):
        self.seatHeight = newValue
        
    def printLine(self):
        print(f"Cadence: {self.cadence}, Speed: {self.speed}, Gear: {self.gear}, seatHeight: {self.seatHeight}")
            