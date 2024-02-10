# Unreal Engine Project
This is an Unreal Engine Project that simulates a graphic display of a news release.
This project is divided into 5 parts:
In the first step, the project will play a pre recorded video in a loop on full screen.
Pressing the T key will activate an animation that reduces the movie by two-thirds and displays next to it a map of the State of Israel with a flashing dot on the city of Tel Aviv.
The system will stream the final video in real time in SRT HD50i format.
On top of each final Frame Buffer that is played out, the first 20 lines of pixels from the corresponding Frame Buffer of the original video are copied and written exactly on the Frame Buffer of the final video.
This SRT HD50i streaming is then streamed to SRT Live Video Streaming Server.

# Notes
Such a project requires a lot of disk space and time to download and run.
In total this project will require you to download around ~135 GB (yes 135 GB not MB) and a couple of hours to fully take care of everything.
This will consist of the Epic Games launcher, Unreal Engine 5.3.1, extensions, third party libaries, Git Large File Storage (LFS) and a lot more.

# Prerequisites 
before even trying to deal with the git itself follow this instructions:
download the Epic Games launcher - https://store.epicgames.com/en-US/download
download Unreal Engine 5.3.1 with the following installation options - 
(https://github.com/nahoom567/SecUnrealNews/assets/128990420/6c009e57-c756-4721-b759-9e56a6761fe0) - an image url of the basic options that needs to be to marked
(https://github.com/nahoom567/SecUnrealNews/assets/128990420/b40b4f59-4a08-488a-bfa1-149eb6e8f9ce) - choose the Target Platform relevant to you
download Git Large File Storage (LFS) - installation: https://git-lfs.com/
I recommend to download GitHub Desktop in order to be able to view the organized files (such a way is very common when dealing with Unreal Engine projects).

# Installation
after taking care of the prerequisites follow this instructions:
Create a local version of the remote git repository and open it through Unreal Engine 5.3.1 (it's essential that you use this version specifically)
plugins:
I have already made it so once you have downloaded the git it will download the plugins with it.
However, one of the plugins will require you to login to the account I have created and not just download the toolkit.
This is the Unreal Engine Toolkit made by offworldlive, you will need to login to my account to be able to use this.
You can do it by looking for Off World Live in the top left side of the screen in the opened unreal engine. - image to help you https://github.com/nahoom567/SecUnrealNews/assets/128990420/ff7a6b5a-87e3-443e-a05c-a4fd9ddd0f5a
From there, under account press log in. This will take you to the login screen of the plugin. 
the email of my account is walksalesoo@gmail.com and password is A327i901617
Right now, there is a problem with my SRT Server, so in order to view the streaming you will need to use an online SRT server, I recommend using castr.
Connect the server to the OWLMediaOutput. to do this press F4 to open OWLMediaOutput that you can access through the world outliner - an image showing it:
(https://github.com/nahoom567/SecUnrealNews/assets/128990420/2a9b7e96-fa2e-4237-b1f7-75f5c67e4c15)
Once you have opened it, change to the stream URL of the server.
The last part won't be necessary for long I will fix it soon and change the README accordingly.
