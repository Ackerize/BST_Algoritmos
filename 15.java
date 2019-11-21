   boolean isPairPresent(Node node, int target) 
    { 
        // This list a1 is passed as an argument 
        // in treeToList method 
        // which is later on filled by the values of BST 
        ArrayList<Integer> a1 = new ArrayList<>(); 
  
        // a2 list contains all the values of BST 
        // returned by treeToList method 
        ArrayList<Integer> a2 = treeToList(node, a1); 
  
        int start = 0; // Starting index of a2 
  
        int end = a2.size() - 1; // Ending index of a2 
  
        while (start < end) { 
  
            if (a2.get(start) + a2.get(end) == target) // Target Found! 
            { 
                System.out.println("Pair Found: " + a2.get(start) + " + " + a2.get(end) + " "
                                   + "= " + target); 
                return true; 
            } 
  
            if (a2.get(start) + a2.get(end) > target) // decrements end 
            { 
                end--; 
            } 
  
            if (a2.get(start) + a2.get(end) < target) // increments start 
            { 
                start++; 
            } 
        } 
  
        System.out.println("No such values are found!"); 
        return false; 
    } 
