package digital_banana_studio.suvey;

import android.app.Activity;
import android.os.Build;
import android.support.annotation.RequiresApi;
import android.transition.ChangeBounds;
import android.transition.TransitionSet;
import android.transition.Fade;
import android.transition.AutoTransition;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.ListView;
import android.widget.TabHost;
import android.widget.Toast;
import java.util.ArrayList;
import java.util.Locale;
import android.app.Activity;
import android.app.Fragment;
import android.app.FragmentManager;
import android.app.SearchManager;
import android.content.Intent;
import android.content.res.Configuration;
import android.os.Bundle;
import android.support.v4.app.ActionBarDrawerToggle;
import android.support.v4.view.GravityCompat;
import android.support.v4.widget.DrawerLayout;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ImageView;
import android.widget.ListView;
import android.widget.Toast;

import lib.SlidingMenu.src.com.jeremyfeinstein.slidingmenu.lib.SlidingMenu;

/**
 * Created by Ученик on 24.11.2017.
 */

public class opros extends Activity {
    ArrayList<Product> products = new ArrayList();
    ListView productList;
    private DrawerLayout mDrawerLayout;
    private ListView mDrawerList;
    private ActionBarDrawerToggle mDrawerToggle;

    private CharSequence mDrawerTitle;
    private CharSequence mTitle;
    private String[] mPlanetTitles;


    @RequiresApi(api = Build.VERSION_CODES.KITKAT)
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.opros);
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
        );//@android:style/Widget.DeviceDefault.Button.Inset
        ((ListView) findViewById(R.id.sidemenu)).setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                if(parent.getItemAtPosition(position).equals("Профиль")){
                    Intent intent = new Intent(opros.this, profile.class);
                    startActivity(intent);
                } else if(parent.getItemAtPosition(position).equals("Все Книги")){
                    Intent intent = new Intent(opros.this, opros.class);
                    startActivity(intent);
                }else if(parent.getItemAtPosition(position).equals("логин")){
                    Intent intent = new Intent(opros.this, login.class);
                    startActivity(intent);
                }else if(parent.getItemAtPosition(position).equals("регистрация")){
                    Intent intent = new Intent(opros.this, registration.class);
                    startActivity(intent);
                }
            }
        });



        setTitle("TabHost");

        TabHost tabHost = (TabHost) findViewById(R.id.content_frame);

        tabHost.setup();

        TabHost.TabSpec tabSpec = tabHost.newTabSpec("tag1");

        tabSpec.setContent(R.id.linearLayout);
        tabSpec.setIndicator("ВСЕ КНИГИ");
        tabHost.addTab(tabSpec);



        tabHost.setCurrentTab(0);


        if (products.size() == 0) {
            products.add(new Product("Картофель", "проголосовавших"));
            products.add(new Product("Чайшт.", "проголосовавших"));
            products.add(new Product("Яйца", "проголосовавших"));
            products.add(new Product("Молоко", "проголосовавших"));
            products.add(new Product("Макароны", "проголосовавших"));



        }
        productList = (ListView) findViewById(R.id.productList);
        ProductAdapter adapter = new ProductAdapter(this, R.layout.list_item, products);
        productList.setAdapter(adapter);

    }

    public void lol(View view) {
        Toast toast = Toast.makeText(getApplicationContext(),
                "toast", Toast.LENGTH_SHORT);
        toast.show();
    }

    public void plusOpros(View view) {
        //Toast toast = Toast.makeText(getApplicationContext(),
            //    "plusssssssssss", Toast.LENGTH_SHORT);
      //  toast.show();


        createTwoButtonsAlertDialog("Внимание!!!", "Вы действительно хотите создать новый опрос?");




    }
    private void createTwoButtonsAlertDialog(String title, String content) {

        AlertDialog.Builder builder = new AlertDialog.Builder(opros.this);
        builder.setTitle(title);
        builder.setMessage(content);
        builder.setNegativeButton("нет спасибо ",
                new DialogInterface.OnClickListener() {
                    public void onClick(DialogInterface dialog,
                                        int which) {
                        showMessage("слава папе римскому");
                    }
                });
        builder.setPositiveButton("очень хочу",
                new DialogInterface.OnClickListener() {
                    public void onClick(DialogInterface dialog,
                                        int which) {
                        showMessage("вот теперь заморачивайся сам напросился");
                        dialog.cancel();
                        Intent intent = new Intent();
                        startActivity(intent);

                    }
                });
        builder.show();

    }
    private void showMessage(String textInMessage) {
        Toast.makeText(getApplicationContext(), textInMessage, Toast.LENGTH_LONG).show();
    }


}





