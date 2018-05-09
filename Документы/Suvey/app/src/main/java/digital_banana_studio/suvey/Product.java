package digital_banana_studio.suvey;

import android.view.View;

/**
 * Created by Ученик on 24.11.2017.
 */

public class Product {

    private String name;
    private int count;
    private int count2;
    private String unit;
    private String unit2;

    Product(String name,String unit){
        this.name = name;
        this.count=0;
        this.count2=0;
        this.unit = unit;
    }
    public String getUnit() {
        return this.unit;
    }
    public String getUnit2() {
        return this.unit2;
    }
    public void setCount(int count) {
        this.count = count;
    }
    public void setCount2(int count2) {
        this.count2 = count2;
    }
    public int getCount() {
        return count;
    }
    public int getCount2() {
        return count2;
    }
    public void setName(String name){
        this.name = name;
    }
    public String getName(){
        return this.name;
    }
}

