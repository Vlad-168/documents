class TreeMap{
	Node root;
	
	public String search (int key, String defValue){
		return search(key, defValue, root);
	}
	
	private String search (int key, String defValue, Node parent){
		if (parent ==  null){
			return defValue;
		}
		else if (parent.key == key){
			return parent.value;
		}
		else if (key<parent.key){
			return search(key, defValue, parent.left);
		}
		else {
			return search(key, defValue, parent.right);
		}
		
	}
	public void add(int key, String value){
		add(key,  value, root);
	}
	
	private void add(int key, String value, Node parent){
		if (root == null){
			root = new Node(key,value);
		}
		else if (parent != null){
			if (key < parent.key){
				//нужно ли спускаться в левое поддерево
				if (parent.left == null){
					parent.left = new Node(key,value);
				}
				else {
					add(key,value, parent.left);
				}
			}
			else if (key > parent.key){
					//нужно ли спускаться в правое поддерево
					if (parent.right == null){
						parent.right = new Node(key,value);
					}
					else {
						add(key,value, parent.right);
					}
			}
		}
	}
	
	public TreeMap () {
		
			
		}
		
	}
	
	class Node{
		int key;
		String value;
		Node left, right;
		
		public Node (int key, String value) {
			this.key = key;
			this.value = value;
		}
	}

public class hello {

	
	public static void main(String[] args) {
		TreeMap tree = new TreeMap();
		tree.add(10, "Artemenko");
		tree.add(50, "Groshkov");
		tree.add(70, "Vlad");
		System.out.println(tree.search(10, "Artemenko"));
		
		java.util.TreeMap <String, String> dictionary = new java.util.TreeMap<>();
		dictionary.put("Россия", "Москва");
		dictionary.put("США", "NEW YORK");
		dictionary.put("Австралия", "Мельбурн");
		System.out.println(dictionary);
		System.out.println(dictionary.get("США"));
		
				

	}

}
