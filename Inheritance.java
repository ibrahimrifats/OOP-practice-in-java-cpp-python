public class Inheritance{
    public static void main(String[] args){
        Cat mycat = new Cat();

        mycat.meow();
        mycat.eat();
        mycat.sleep();

    }
}


public class Animal {
    public void eat(){
        System.out.println("Eating...");
    }
    public void sleep(){
        System.out.println("sleeping...");
    }

}

class Cat extends Animal{
    public void meow(){
        System.out.println("meowing...");
    }
}