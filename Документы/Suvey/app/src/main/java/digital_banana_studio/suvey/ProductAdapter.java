package digital_banana_studio.suvey;


        import android.content.Context;
        import android.transition.TransitionManager;
        import android.util.Log;
        import android.view.LayoutInflater;
        import android.view.View;
        import android.view.ViewGroup;
        import android.widget.ArrayAdapter;
        import android.widget.Button;
        import android.widget.ImageView;
        import android.widget.TextView;

        import java.util.ArrayList;

class ProductAdapter extends ArrayAdapter<Product> {
    private LayoutInflater inflater;
    private int layout;
    private ArrayList<Product> productList;

    ProductAdapter(Context context, int resource, ArrayList<Product> products) {
        super(context, resource, products);
        this.productList = products;
        this.layout = resource;
        this.inflater = LayoutInflater.from(context);
    }
    public View getView(final int position, View convertView, ViewGroup parent) {

        final ViewHolder viewHolder;
        convertView = inflater.inflate(this.layout, parent, false);
        viewHolder = new ViewHolder(convertView);
        viewHolder.id = (int)(Math.random()*1000);
        convertView.setTag(viewHolder);
        final Product product = productList.get(position);

        viewHolder.nameView.setText(product.getName());




        return convertView;
    }

    private String formatValue(int count, String unit){
        return String.valueOf(count) + " " + unit;
    }
    private String formatValue2(int count2, String unit2){
        return String.valueOf(count2) + " " + unit2;
    }
    private class ViewHolder {
        final Button addButton;
        final TextView nameView;
        public int id;
        ViewHolder(View view){
            addButton = (Button) view.findViewById(R.id.item_two_button);

            nameView = (TextView) view.findViewById(R.id.item_Text);



        }
    }
}