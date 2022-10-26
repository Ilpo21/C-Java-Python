/* Refactored from "Java solution to Project Euler Problem 22", see...
 * https://rianjs.net/2011/05/java-solution-to-project-euler-problem-22
 * 
 * Less code lines, more clear (note that there are many lines of comments
 * below).
 * 
 * The names.txt now includes names ("plain" names, not in quotes), one
 * per line (comma replaced with newline, quotes removed). This way the 
 * file is less cumbersome to handle and less error-prone (no need to 
 * worry about e.g., possibly missing quotes).
 */
package second;

import java.io.*;
// Needed if you use the readAllLines method below...
//import java.nio.file.Files;
//import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
 
public class Problem022 {
	
	private static List<String> nameList = new ArrayList<>();
  
	private static void readFile(String filename) throws IOException {
		long begin = System.currentTimeMillis();	
		
		File f = new File(filename);
		
		try (BufferedReader reader = new BufferedReader(new FileReader(f))) {
		
		//try {

			/* Note 1 - use of readAllLines is not a recommended for handling
			 * large files. Compare e.g., processing times for the file.
			 * 
			 * Note 2 - use of readAllLines method does not require the use
			 * of try-catch-block - but the method is included in the block
			 * to provide clear way handling the exceptions for the user (e.g., 
			 * in a case when a file is not found.
			 */
			//nameList = Files.readAllLines(Paths.get(filename));

			String text = null;
			while ((text = reader.readLine()) != null)
			{
				nameList.add(text);			
			}
		}
		catch (FileNotFoundException e)
		{
			//e.printStackTrace();
			throw new FileNotFoundException("File \"" + filename + "\" not found!");
		}
		catch (IOException e)
		{
			//e.printStackTrace();
			throw new IOException("Cannot process the file: \"" + filename + "\"!");	
		}
		System.out.println("File IO: " + (System.currentTimeMillis() - begin) + "ms");	
		System.out.println("List size: " + nameList.size());
	}
 
	private static long calcValue() {
		long grandTotal = 0;
		int i = 1;

		for (String tmp : nameList) {
			
			int localSum = 0; 
			
			/* For now we trust the file is valid (there are names in the
			 * file, one per line and the names are not empty, null or 
			 * the names do not include special characters). 
			 * If you wanted to ensure a name included only letters A-Z
			 * you would check it here. You may try, if you like.
			 */
 
			for (int j = 0; j < tmp.length(); j++) {
				// Ascii A = 65
				localSum += (tmp.charAt(j) - 'A') + 1;
			}
 
			localSum *= (i);
			grandTotal += localSum;
			i++;
		}
 
		return grandTotal;		
	}
 
	public static void main(String[] args) {
		
		long begin = System.currentTimeMillis();
 
		try {
			readFile("names.txt");
			
			Collections.sort(nameList);
			System.out.println(calcValue());
	 
			long end = System.currentTimeMillis();
			System.out.println("Total execution time: " + (end-begin) + "ms");

		} catch (IOException e) {

			System.out.println(e.getMessage());
		}		
	}
}
