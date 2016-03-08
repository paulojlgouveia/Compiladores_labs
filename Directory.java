package pt.tecnico.mydrive.domain;

import java.util.Collection;
import java.util.Map;
import java.util.TreeMap;


public class Directory extends Directory_Base {

	public Directory(String name, User owner) {
		super(name);
		setOwner(owner);
		addFile(this);	// '.' or '..'
	}

	public Directory(String name, User owner, Directory parent) {
		super(name);
		setOwner(owner);
		addFile(this);		// this doesn't give it the name '.'
		addFile(parent);	// this doesn't give it the name '..'
	}

	
// 	@Override	// when in File class
	public int getSize() {
		int size = 0;
		for(File file : getFileSet())
				size++;
		
		return size;
	}

	    public void addFile(pt.tecnico.mydrive.domain.File file) {

	
	
	
	
    /*

	public Collection<Entry> getSubEntries() { return _entries.values();}

	@Override
	public String toString() {
		return ("d " + getPermission() + " " + getOwner() + " " + getSize() + " " + getName());
	}
	
	
	@Override
	public String toString(String name) {
		return ("d " + getPermission() + " " + getOwner() + " " + getSize() + " " + name);
	}

	
	@Override
	public Entry getParentDirectory() { return _entries.get(".."); }
	
	
	@Override
	public void createSubDirectory(String name) {
		_entries.put(name, new Directory(name, this.getOwner(), this));
	}
	
	@Override
	public void createDirectory(String path, String owner, String permission) {
		if(path.indexOf("/") == 0)
			path = path.substring(1);
		
		String [] dir_name = path.split("/", 2);
		Entry dir = _entries.get(dir_name[0]);
		
		if(dir == null){
			if(dir_name.length == 1)
				dir = new Directory(dir_name[0], owner, permission, this);
			else
				dir = new Directory(dir_name[0], getOwner(), this);		
			_entries.put(dir_name[0], dir);
		}
		if(dir_name.length == 2)
			dir.createDirectory(dir_name[1], owner, permission);
	}
	
	@Override
	public void createFile(String path, String owner, String permission, String data) {
		if(path.indexOf("/") == 0)
			path = path.substring(1);
		
		String [] dir_name = path.split("/", 2);
		Entry dir = _entries.get(dir_name[0]);
		
		if(dir == null){
			if(dir_name.length == 1)
				dir = new File(dir_name[0], owner, permission, data);
			else
				dir = new Directory(dir_name[0], getOwner(), this);		
			_entries.put(dir_name[0], dir);
		}
		if(dir_name.length == 2)
			dir.createFile(dir_name[1], owner, permission, data);
	}
	
	@Override
	public void createSubDirectory(String name, String owner) {
		_entries.put(name, new Directory(name, owner, this));
	}
	
	@Override
	public Entry getSubEntry(String name) {
		return _entries.get(name);
	}
	
	@Override
	public void setParentDirectory(Entry parent) {
		_entries.remove("..");
		_entries.put("..", new Directory("..", parent.getOwner(), parent));
	}
	
	
	@Override
	public String stringFullPath(String out) {
		if (getName().equals("/"))
			out = out;
		else
			out = _entries.get("..").stringFullPath(out) + "/" + getName();
		return out;
	}	
	
	public String stringData() { return null; }
	
	public void appendData(String data) {}
	
	public void removeEntry(String name) {
		_entries.remove(name);
	}
    */
    
}
