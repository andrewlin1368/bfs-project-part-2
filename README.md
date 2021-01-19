# Programming Exercise, Part 2: A Labeled Graph
For this project, we need to be able to create graphs that have labeled vertices, not just
numbers. For example:

![graph](https://i.ibb.co/6gfXVCg/Capture.png)

Our current implementation of a graph does not allow labeled vertices. In this part, we
extend the graph implementation to achieve that. To keep things clear and simple, we will
work with a new class called LabeledGraph.

The representation of a graph will stay the same and vertices will still be numbered. We
will simply keep track of the label associated with each vertex. For example:

![graph](https://i.ibb.co/F79SMqj/Capture.png)

Download the starter code for this part of the project and take a look at it so that you
understand how the labeled graph is being represented and handled.

## TASK 1. 
Create a client program (LabeledGraphClient.cpp) with a main function where
you will create and display the graph in the following figure:

The name of your graph object must be a single word consisting of your name followed by
the suffix “LabeledGraph”. For example, my graph name should be zavalaLabeledGraph.

## TASK 2. 
Just like in part 1 of this project, in order for the graph to be displayed, you will
need to write the implementation of the overloaded output operator (LabeledGraph.cxx
file). For simplicity, you do not need to display a visual graph. Instead, do a textual display.
For example:

![ex](https://i.ibb.co/4YKTf6Y/Capture.png)
