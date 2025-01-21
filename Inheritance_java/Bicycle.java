public class Bicycle{
    public int cadence;
    public int gear;
    public int speed;

    public void setCadence(int newValue){
        cadence = newValue;
    }

    public void setGear(int newValue){
        gear = newValue;
    }
    public void setSpeed(int newValue){
        speed = newValue;
    }

    public void println(){
        System.out.println("cadence: "+cadence + ", gear: "+ gear + ", speed: "+ speed);
    }


}