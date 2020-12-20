# CGI_Implementation
A simple CGI program that you can invoke remotely through a webpage

This C program converts an int number to its binary representations. It runs as a server application and prints out results in a dynamically generated html page.

public_html directory which all users are granted reading and executing rights
public_html contains:
  binary_converter.c which receives an int number through CGI GET method     and converts this number into its binary representation
   index.html which implements a simple form using GET method. It has a label fields "Enter an int number", followed by an input field and a submit button "convert to binary". When button is clicked, binary_converter program runs on the server and the result is printed out to the browser.
  
