******Installation Steps**********
/* @author: Dhirendra Singh
*/

Step1)you can the tutorial from :https://www.digitalocean.com/community/tutorials/how-to-	install-java-on-ubuntu-with-apt-get
Step2)Installing Oracle JDK (optional). You can still install it using apt-get. To install any version, first execute the following commands:
	sudo apt-get install python-software-properties
	sudo add-apt-repository ppa:webupd8team/java
	sudo apt-get update
Step3) you are now installing the oracle java
	sudo apt-get install oracle-java8-installer
Step4)It’s not necessary  that your java path is set as there might be JDK  previously installed
When there are multiple Java installations on your Droplet, the Java version to use as default can be chosen. To do this, execute the following command:
	sudo update-alternatives --config java
Step5) There are 2 choices for the alternative java (providing /usr/bin/java).

##Selection    Path                                            Priority   Status
##------------------------------------------------------------
##* 0            /usr/lib/jvm/java-7-oracle/jre/bin/java          1062      auto mode
##  1            /usr/lib/jvm/java-6-openjdk-amd64/jre/bin/java   1061      manual mode
##  2            /usr/lib/jvm/java-7-oracle/jre/bin/java          1062      manual mode

Press enter to keep the current choice[*], or type selection number:
Step6) You can now choose the number to use as default. This can also be done for the Java compiler (javac):
	sudo update-alternatives --config javac

******Setting hadoop********

Step7)For the single node setup please  use  the tutorial from  [hadoop prepare and setup] with in the hadoop folder. And the files with in it.
Step8)Rename the hadoop folder to hadoop. In my computer I made the following changes
```sh
	mv hadoop-2.6.0  hadoop
```
Step9)In your computer change the loacation to  from you existing folder to /usr/local/hadoop
```sh
	sudo hadoop  /usr/local/hadoop
```
	Type your password and transfer would be complete to the local  folder.

Step10)changes in the .bashrc file
	you need to set your java home in java bashrc file
Step11) you need to set you java path variables in the .bashrc file as
	export HADOOP_HOME=/usr/local/hadoop/

Step12) Set JAVA_HOME (we will also configure JAVA_HOME directly for Hadoop later on)
	export JAVA_HOME=/usr/lib/jvm/java-8-oracle/
Step13) Add Hadoop bin/ directory to PATH

export PATH=$PATH:$HADOOP_HOME/bin
export HADOOP_MAPRED_HOME=$HADOOP_HOME
export HADOOP_COMMON_HOME=$HADOOP_HOME
export HADOOP_HDFS_HOME=$HADOOP_HOME
export YARN_HOME=$HADOOP_HOME
export HADOOP_CONF_DIR=$HADOOP_HOME/etc/hadoop
export YARN_CONF_DIR=$HADOOP_HOME/etc/hadoop

```
Step14) Link for 10 GB file: https://drive.google.com/file/d/0B61MyJQpIVHhVGdYdUNfSXhRejA/view
