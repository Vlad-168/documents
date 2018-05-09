package digital_banana_studio.suvey;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.TabHost;
import android.widget.TextView;
import android.widget.Toast;

import java.util.ArrayList;
import java.util.Arrays;

import lib.SlidingMenu.src.com.jeremyfeinstein.slidingmenu.lib.SlidingMenu;

/**
 * Created by Ученик on 24.11.2017.
 */

public class login extends Activity {
    ArrayAdapter<String> adapter;



    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        setContentView(R.layout.login);
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
                new ArrayAdapter<Object>(this, R.layout.sidemenu_item, R.id.text, items));
        ((ListView) findViewById(R.id.sidemenu)).setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                if(parent.getItemAtPosition(position).equals("Профиль")){
                    Intent intent = new Intent(login.this, profile.class);
                    startActivity(intent);
                } else if(parent.getItemAtPosition(position).equals("Опросы")){
                    Intent intent = new Intent(login.this, opros.class);
                    startActivity(intent);
                }else if(parent.getItemAtPosition(position).equals("Новый опрос")){
                    Intent intent = new Intent(login.this, createdOpros.class);
                    startActivity(intent);
                }else if(parent.getItemAtPosition(position).equals("Достижения")){
                    Intent intent = new Intent(login.this, achivment.class);
                    startActivity(intent);
                }else if(parent.getItemAtPosition(position).equals("логин")){
                    Intent intent = new Intent(login.this, login.class);
                    startActivity(intent);
                }else if(parent.getItemAtPosition(position).equals("регистрация")){
                    Intent intent = new Intent(login.this, registration.class);
                    startActivity(intent);
                }
            }
        });
*/



        //  Toast.makeText(this, "Появится в будующих обновлениях", Toast.LENGTH_SHORT).show();


        // final String[] Valuta = new String[]{"Зубная щетка", " зубная паста", "Мыло", " мочалка", "Шампунь", "Тоник", " гель для умывания", "Крема", "Ватные диски", " ватные палочки", "Средства интимной гигиен ы", "Дезодорант", " спрей для укладки", " лак для волос", " расческа", " заколки", " ободки", "очки", " контактные линзы", " раствор для линз", "Косметика", " парфюм", "Зеркало", "Пилка и маникюрные ножницы", "Лекарства", "Целлофановые пакеты", " сумки", "Мусорные мешки", "Фен", "Фотоаппарат", " видеокамера", " карты памяти", " Чашка", " ложка", " нож", " чай", " кофе", " сахар", " печенье", " шоколад", " орехи", "Чайник", "Зонт", "Губка", "Тряпочка для обуви"};




        //listView.setAdapter(adapter); установка listview

        //listView.setOnItemClickListener(
        //   Toast.makeText(getApplicationContext(), "asd", Toast.LENGTH_SHORT).show(););






//
    }




    public void loginSuccesful(View view) {
        final ArrayList<String> userPpassword = loadArrayList("userPpassword"); // загружаем
        final ArrayList<String> userLogin = loadArrayList("userLogin"); // загружаем
        final EditText editTextlog = (EditText) findViewById(R.id.editTextLog);
        final EditText editTextPas = (EditText) findViewById(R.id.editTextPas);
        String strPass0 = editTextlog.getText().toString();
        String strPass1 = editTextPas.getText().toString();

        if(strPass0.equals("")){

            Toast.makeText(this, "введите логин ", Toast.LENGTH_SHORT).show();
        }else{
            if(strPass1.equals("")){

                Toast.makeText(this, "введите пароль ", Toast.LENGTH_SHORT).show();
            } else {
                int index = userLogin.indexOf(strPass0);

                if(index >=0){
                    if (strPass1.equals(userPpassword.get(index))) {


                    editTextPas.setText("");
                    editTextlog.setText("");


                    Intent intent = new Intent(login.this, opros.class);
                    startActivity(intent);
                } else {
                    Toast.makeText(this, "пароль или логин введены не верно", Toast.LENGTH_SHORT).show();


                }
                }else {
                    Toast.makeText(this, "пароль или логин введены не верно", Toast.LENGTH_SHORT).show();


                }
            }



            }

        }





    public void Registr(View view) {
        Intent intent = new Intent(login.this, registration.class);
        startActivity(intent);
    }

    public void avtorizac(View view) {

        Intent intent = new Intent(login.this, opros.class);
        startActivity(intent);
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
        Intent intent = new Intent(login.this, login.class);
        startActivity(intent);



    }





















}

