## Just add the templates or functions you need in your code

**Hello, every competitive programmer 🖐**, It occurred to me that many competitors leave a lot of templates and functions in their code to solve problems in contests fast, **but** If there is someone who wants to read your code after that to learn from you or understand the idea of the problem?  Won't he have difficulties?
I think he gets a little annoyed and gets lost between existing templates and functions, **and for that**, I made this repository, **To solve problems in contests fast with clean and ordinary code.**

----

After some changes will you make in your working  directory, all you need is to write this line code with the function or template you need and the file you are working on : 

    addTemplate(Template name, Current file);

**but now,** what are these changes?

1. **First,** you need to create a Template folder in your working directory to save all templates and functions in it.
But note, If you need to change the folder name, also you need to change it in addTemplate.h file **(change dir variable)**:

    **addTemplate.h** ➡ **addTemp** function ➡ **dir = "Templates/"**
    
    <img src="images/changeDir.jpeg"  width="430"/>  
