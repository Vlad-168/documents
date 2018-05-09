package digital_banana_studio.suvey;

import android.app.Activity;
import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;

import lib.SlidingMenu.src.com.jeremyfeinstein.slidingmenu.lib.SlidingMenu;

public class avtorizacia extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        //menu
        SlidingMenu menu = new SlidingMenu(this);
        menu.setMode(SlidingMenu.LEFT);
        menu.setTouchModeAbove(SlidingMenu.TOUCHMODE_FULLSCREEN);
        menu.setFadeDegree(0.35f);
        menu.attachToActivity(this, SlidingMenu.SLIDING_WINDOW);
        menu.setMenu(R.layout.sidemenu);
        menu.setBehindWidthRes(R.dimen.slidingmenu_behind_width);


        String[] items = {"Профиль", "Все Книги","логин","регистрация"};
        ((ListView) findViewById(R.id.sidemenu)).setAdapter(
                new ArrayAdapter<Object>(
                        this,
                        R.layout.sidemenu_item,
                        R.id.text,
                        items
                )
        );
        ((ListView) findViewById(R.id.sidemenu)).setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                if(parent.getItemAtPosition(position).equals("Профиль")){
                    Intent intent = new Intent(avtorizacia.this, profile.class);
                    startActivity(intent);
                } else if(parent.getItemAtPosition(position).equals("Все Книги")){
                    Intent intent = new Intent(avtorizacia.this, opros.class);
                    startActivity(intent);
                }else if(parent.getItemAtPosition(position).equals("логин")){
                    Intent intent = new Intent(avtorizacia.this, login.class);
                    startActivity(intent);
                }else if(parent.getItemAtPosition(position).equals("регистрация")){
                    Intent intent = new Intent(avtorizacia.this, registration.class);
                    startActivity(intent);
                }
            }
        });
//

        Intent intent = new Intent(avtorizacia.this, login.class);
        startActivity(intent);
    }
}
