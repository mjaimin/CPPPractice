Ace (Ajax.org Cloud9 Editor)
============================

_Note_: The new site at http://ace.c9.io contains all the info below along with an embedding guide and all the other resources you need to get started with Ace.

Ace is a standalone code editor written in JavaScript. Our goal is to create a browser based editor that matches and extends the features, usability and performance of existing native editors such as TextMate, Vim or Eclipse. It can be easily embedded in any web page or JavaScript application. Ace is developed as the primary editor for [Cloud9 IDE](https://c9.io/) and the successor of the Mozilla Skywriter (Bespin) Project.

Features
--------

* Syntax highlighting for over 120 languages (TextMate/Sublime/_.tmlanguage_ files can be imported)
* Over 20 themes (TextMate/Sublime/_.tmtheme_ files can be imported)
* Automatic indent and outdent
* An optional command line
* Handles huge documents (at last check, 4,000,000 lines is the upper limit)
* Fully customizable key bindings including vim and Emacs modes
* Search and replace with regular expressions
* Highlight matching parentheses
* Toggle between soft tabs and real tabs
* Displays hidden characters
* Drag and drop text using the mouse
* Line wrapping
* Code folding
* Multiple cursors and selections
* Live syntax checker (currently JavaScript/CoffeeScript/CSS/XQuery)
* Cut, copy, and paste functionality

Take Ace for a spin!
--------------------

Check out the Ace live [demo](http://ace.c9.io/build/kitchen-sink.html) or get a [Cloud9 IDE account](https://c9.io/) to experience Ace while editing one of your own GitHub projects.

If you want, you can use Ace as a textarea replacement thanks to the [Ace Bookmarklet](http://ajaxorg.github.io/ace/build/demo/bookmarklet/index.html).

Embedding Ace
-------------

Ace can be easily embedded into any existing web page. You can either use one of pre-packaged versions of [ace](https://github.com/ajaxorg/ace-builds/) (just copy one of `src*` subdirectories somewhere into your project), or use requireJS to load contents of [lib/ace](https://github.com/ajaxorg/ace/tree/master/lib/ace) as `ace`


The easiest version is simply:



With "editor" being the id of the DOM element, which should be converted to an editor. Note that this element must be explicitly sized and positioned `absolute` or `relative` for Ace to work. e.g.
```c
#include<stdio.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node *next;
}*head;
 
 
 
void append(int num)
{
    struct node *temp,*right;
    temp= (struct node *)malloc(sizeof(struct node));
    temp->data=num;
    right=(struct node *)head;
    while(right->next != NULL)
    right=right->next;
    right->next =temp;
    right=temp;
    right->next=NULL;
}
 
 
 
void add( int num )
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    if (head== NULL)
    {
    head=temp;
    head->next=NULL;
    }
    else
    {
    temp->next=head;
    head=temp;
    }
}
void addafter(int num, int loc)
{
    int i;
    struct node *temp,*left,*right;
    right=head;
    for(i=1;i<loc;i++)
    {
    left=right;
    right=right->next;
    }
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    left->next=temp;
    left=temp;
    left->next=right;
    return;
}
 
 
 
void insert(int num)
{
    int c=0;
    struct node *temp;
    temp=head;
    if(temp==NULL)
    {
    add(num);
    }
    else
    {
    while(temp!=NULL)
    {
        if(temp->data<num)
        c++;
        temp=temp->next;
    }
    if(c==0)
        add(num);
    else if(c<count())
        addafter(num,++c);
    else
        append(num);
    }
}
 
 
 
int delete(int num)
{
    struct node *temp, *prev;
    temp=head;
    while(temp!=NULL)
    {
    if(temp->data==num)
    {
        if(temp==head)
        {
        head=temp->next;
        free(temp);
        return 1;
        }
        else
        {
        prev->next=temp->next;
        free(temp);
        return 1;
        }
    }
    else
    {
        prev=temp;
        temp= temp->next;
    }
    }
    return 0;
}
 
 
void  display(struct node *r)
{
    r=head;
    if(r==NULL)
    {
    return;
    }
    while(r!=NULL)
    {
    printf("%d ",r->data);
    r=r->next;
    }
    printf("\n");
}
 
 
int count()
{
    struct node *n;
    int c=0;
    n=head;
    while(n!=NULL)
    {
    n=n->next;
    c++;
    }
    return c;
}
 
 
int  main()
{
    int i,num;
    struct node *n;
    head=NULL;
    while(1)
    {
    printf("\nList Operations\n");
    printf("===============\n");
    printf("1.Insert\n");
    printf("2.Display\n");
    printf("3.Size\n");
    printf("4.Delete\n");
    printf("5.Exit\n");
    printf("Enter your choice : ");
    if(scanf("%d",&i)<=0){
        printf("Enter only an Integer\n");
        exit(0);
    } else {
        switch(i)
        {
        case 1:      printf("Enter the number to insert : ");
                 scanf("%d",&num);
                 insert(num);
                 break;
        case 2:     if(head==NULL)
                {
                printf("List is Empty\n");
                }
                else
                {
                printf("Element(s) in the list are : ");
                }
                display(n);
                break;
        case 3:     printf("Size of the list is %d\n",count());
                break;
        case 4:     if(head==NULL)
                printf("List is Empty\n");
                else{
                printf("Enter the number to delete : ");
                scanf("%d",&num);
                if(delete(num))
                    printf("%d deleted successfully\n",num);
                else
                    printf("%d not found in the list\n",num);
                }
                break;
        case 5:     return 0;
        default:    printf("Invalid option\n");
        }
    }
    }
    return 0;
}
```
```css
    #editor {
        position: absolute;
        width: 500px;
        height: 400px;
    }
```

To change the theme simply include the Theme's JavaScript file

```html
    <script src="src/theme-twilight.js" type="text/javascript" charset="utf-8"></script>
```

and configure the editor to use the theme:

```javascript
    editor.setTheme("ace/theme/twilight");
```

By default the editor only supports plain text mode; many other languages are available as separate modules. After including the mode's JavaScript file:

```html
    <script src="src/mode-javascript.js" type="text/javascript" charset="utf-8"></script>
```

The mode can then be used like this:

```javascript
    var JavaScriptMode = ace.require("ace/mode/javascript").Mode;
    editor.session.setMode(new JavaScriptMode());
```

to destroy editor use

```javascript
    editor.destroy();
    editor.container.remove();
```


Documentation
-------------

Additional usage information, including events to listen to and extending syntax highlighters, can be found [on the main Ace website](http://ace.c9.io).

You can also find API documentation at [http://ace.c9.io/#nav=api](http://ace.c9.io/#nav=api).

Also check out the sample code for the kitchen sink [demo app](https://github.com/ajaxorg/ace/blob/master/demo/kitchen-sink/demo.js).

If you still need help, feel free to drop a mail on the [ace mailing list](http://groups.google.com/group/ace-discuss), or at `irc.freenode.net#ace`.

Running Ace
-----------

After the checkout Ace works out of the box. No build step is required. To try it out, simply start the bundled mini HTTP server: 

```bash
    ./static.py
```

Or using Node.JS

```bash
    npm install mime
    node ./static.js
```

The editor can then be opened at http://localhost:8888/kitchen-sink.html. 

To open the editor with a file:/// URL see [the wiki](https://github.com/ajaxorg/ace/wiki/Running-Ace-from-file).

Building Ace
-----------

You do not generally need to build ACE. The [ace-builds repository](https://github.com/ajaxorg/ace-builds/) endeavours to maintain the latest build, and you can just copy one of _src*_ subdirectories somewhere into your project.

However, all you need is Node.js and npm installed to package ACE. Just run `npm install` in the ace folder to install dependencies:

```bash
    npm install
    node ./Makefile.dryice.js
```

To package Ace, we use the dryice build tool developed by the Mozilla Skywriter team. Call `node Makefile.dryice.js` on the command-line to start the packing. This build script accepts the following options

```bash
-m                 minify build files with uglify-js          
-nc                namespace require and define calls with "ace"
-bm                builds the bookmarklet version
--target ./path    specify relative path for output folder (default value is "./build")
```

To generate all the files in the ace-builds repository, run `node Makefile.dryice.js full --target ../ace-builds`

Running the Unit Tests
----------------------

The Ace unit tests can run on node.js. Assuming you have already done `npm install`, just call:

```bash
    node lib/ace/test/all.js
```

You can also run the tests in your browser by serving:

    http://localhost:8888/lib/ace/test/tests.html

This makes debugging failing tests way more easier.

Contributing
-----------------------------

Ace is a community project and wouldn't be what it is without contributions! We actively encourage and support contributions. The Ace source code is released under the BSD License. This license is very simple, and is friendly to all kinds of projects, whether open source or not. Take charge of your editor and add your favorite language highlighting and keybindings!

Feel free to fork and improve/enhance Ace any way you want. If you feel that the editor or the Ace community will benefit from your changes, please open a pull request. For more information on our contributing guidelines, see [CONTRIBUTING.md](https://github.com/ajaxorg/ace/blob/master/CONTRIBUTING.md).

Continuous Integration status
-----------------------------

This project is tested with [Travis CI](http://travis-ci.org)
[![Build Status](https://secure.travis-ci.org/ajaxorg/ace.png?branch=master)](http://travis-ci.org/ajaxorg/ace)


