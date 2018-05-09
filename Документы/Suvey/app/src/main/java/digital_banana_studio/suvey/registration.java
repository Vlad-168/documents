package digital_banana_studio.suvey;

import android.app.Activity;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.Toast;

import java.util.ArrayList;
import java.util.Arrays;

import lib.SlidingMenu.src.com.jeremyfeinstein.slidingmenu.lib.SlidingMenu;

/**
 * Created by Ученик on 24.11.2017.
 */

public class registration extends Activity{

    ArrayAdapter<String> adapter;


    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.registration);
        //menu
        /*
        SlidingMenu menu = new SlidingMenu(this);
        menu.setMode(SlidingMenu.LEFT);
        menu.setTouchModeAbove(SlidingMenu.TOUCHMODE_FULLSCREEN);
        menu.setFadeDegree(0.35f);
        menu.attachToActivity(this, SlidingMenu.SLIDING_WINDOW);
        menu.setMenu(R.layout.sidemenu);
        menu.setBehindWidthRes(R.dimen.slidingmenu_behind_width);


        String[] items = {"Профиль", "Опросы", "Новый опрос","Достижения","логин","регистрация"};
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
                    Intent intent = new Intent(registration.this, profile.class);
                    startActivity(intent);
                } else if(parent.getItemAtPosition(position).equals("Опросы")){
                    Intent intent = new Intent(registration.this, opros.class);
                    startActivity(intent);
                }else if(parent.getItemAtPosition(position).equals("Новый опрос")){
                    Intent intent = new Intent(registration.this, createdOpros.class);
                    startActivity(intent);
                }else if(parent.getItemAtPosition(position).equals("Достижения")){
                    Intent intent = new Intent(registration.this, achivment.class);
                    startActivity(intent);
                }else if(parent.getItemAtPosition(position).equals("логин")){
                    Intent intent = new Intent(registration.this, login.class);
                    startActivity(intent);
                }else if(parent.getItemAtPosition(position).equals("регистрация")){
                    Intent intent = new Intent(registration.this, registration.class);
                    startActivity(intent);
                }
            }
        });  */
//
    }
    public void avtorizac(View view) {
        Intent intent = new Intent(registration.this, opros.class);
        startActivity(intent);
    }





    public void registrationSuccesful(View view) {
        final ArrayList<String> userPpassword = loadArrayList("userPpassword"); // загружаем
        final ArrayList<String> userLogin = loadArrayList("userLogin"); // загружаем
        final EditText editTextlog = (EditText) findViewById(R.id.editTextLog);
        final EditText editTextPas = (EditText) findViewById(R.id.editTextPas);
        final EditText editTextPasPas = (EditText) findViewById(R.id.editTextPasPas);
        String strPass0 = editTextPas.getText().toString();
        String strPass1 = editTextPas.getText().toString();
        String strPass2 = editTextPasPas.getText().toString();

        if(strPass0.equals("")){

            Toast.makeText(this, "введите логин ", Toast.LENGTH_SHORT).show();
        }else{
            if(strPass1.equals(strPass2)){
                userPpassword.add(0, editTextPas.getText().toString());
                userLogin.add(0, editTextlog.getText().toString());

                editTextPas.setText("");
                editTextlog.setText("");

                saveArrayList("userPpassword", userPpassword); // сохраняем
                saveArrayList("userLogin", userLogin); // сохраняем

                Intent intent = new Intent(registration.this, opros.class);
                startActivity(intent);
            } else {
                Toast.makeText(this, "пароли не совпадают ", Toast.LENGTH_SHORT).show();


            }

        }

    }





    // сохраняем
    private void saveArrayList(String name, ArrayList<String> list) {
        SharedPreferences prefs = getSharedPreferences("myPrefs", MODE_PRIVATE);
        SharedPreferences.Editor editor = prefs.edit();
        StringBuilder sb = new StringBuilder();
        for (String s : list) sb.append(s).append("<s>");
        if (list.size() > 0) sb.delete(sb.length() - 3, sb.length());
        editor.putString(name, sb.toString()).apply();
    }
    // загружаем
    private ArrayList<String> loadArrayList(String name) {
        SharedPreferences prefs = getSharedPreferences("myPrefs", MODE_PRIVATE);
        String[] strings = prefs.getString(name, "").split("<s>");
        ArrayList<String> list = new ArrayList<>();
        list.addAll(Arrays.asList(strings));
        return list;
    }
    //удаляем
    public void delArrayList(View view){

        final ArrayList<String> listchemodan = new ArrayList<>();
        saveArrayList("list_chemodanaa", listchemodan ); // сохраняем
        adapter.notifyDataSetChanged();
        Intent intent = new Intent(registration.this, registration.class);
        startActivity(intent);



    }

}
