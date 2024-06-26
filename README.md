# Unreal Engine Project
This is an Unreal Engine Project that simulates a graphic display of a news release.
This project is divided into 5 parts:

In the first step, the project will play a pre recorded video in a loop on full screen.

Pressing the T key will activate an animation that reduces the movie by two-thirds and displays next to it a map of the State of Israel with a flashing dot on the city of Tel Aviv.

The system will stream the final video in real time in SRT HD50i format.

On top of each final Frame Buffer that is played out, the first 20 lines of pixels from the corresponding Frame Buffer of the original video are copied and written exactly on the Frame Buffer of the final video.

This SRT HD50i streaming is then streamed to SRT Live Video Streaming Server.

# Notes
The project is inside of the master branch.

Going through the project by only looking at the visual studio sln will not do justice to the project as the most complex and important parts are inside of the Unreal Engine 5 environment.

The most complext parts of the project are the way the blueprints are made and how different blueprints use other blueprints in order to make up the final project.

This blueprints are much more complicated to handle and operate together than standard C++ classes.
The blueprints are not only operating with C++ components like functions, macros , variables, etc... they are also using Unreal Engine components such as viewport, events, widgets, meshes, materiales, textures, render targets, levels, and so much more.
This is without even bringing up that the C++ components like functions, macros, variables include not only the C++ version of them but the unreal engine extensions as well, or mentioning the Third Party Libaries, Media, World setting and so on.

Looking only in the visual studio sln won't show even 1/10 of the project and does not represent the complexity of the project.
Without installing the Unreal Engine 5 environment there is no point in viewing the project in the first place.

Such a project requires a lot of disk space and time to download and run.
In total this project will require you to download around ~135 GB (yes 135 GB not MB) and a lot of time to fully take care of everything.
This will consist of the Epic Games launcher, Unreal Engine 5.3.1, extensions, third party libaries, Git Large File Storage (LFS) and a lot more.

If you don't have the space on the PC or the time to install everything, in order to get a basic idea of the project, you can install Unreal Engine Viewer in order to extract assets from Unreal Engine and view them outside of the engine environment. Then you can look at the assests inside the Content Folder with .uassest in order to understand the Core of the project. 

Unreal Engine Viewer - https://www.gildor.org/en/projects/umodel

# Prerequisites 
before dealing with the git itself follow this instructions:
1. download the Epic Games launcher - https://store.epicgames.com/en-US/download
2. download Unreal Engine 5.3.1 with the following installation options -
   (https://github.com/nahoom567/SecUnrealNews/assets/128990420/6c009e57-c756-4721-b759-9e56a6761fe0) - an image url of the basic options that needs to be to marked
   
   (https://github.com/nahoom567/SecUnrealNews/assets/128990420/b40b4f59-4a08-488a-bfa1-149eb6e8f9ce) - choose the Target Platform relevant to you
   
3. download Git Large File Storage (LFS) - installation: https://git-lfs.com/

# Installation
after taking care of the prerequisites follow this instructions:
1. Create a local version of the remote git repository and open it through Unreal Engine 5.3.1 (it's essential that you use this version specifically)
2. plugins:
   I have already made it so once you have downloaded the git it will download the plugins with it.
   One of them is the Unreal Engine Toolkit made by offworldlive, which specifically requires registration.
   You can do it by looking for Off World Live in the top left side of the screen in the opened unreal engine. - image to help you
   https://github.com/nahoom567/SecUnrealNews/assets/128990420/ff7a6b5a-87e3-443e-a05c-a4fd9ddd0f5a
   From there, under account press Register. Once you will finish registering, this will automatically connect the account to the project.
3. It works with an Online SRT Server - I recommend using castr.
   Connect the server to the OWLMediaOutput. to do this press F4 to open OWLMediaOutput that you can access through the world outliner - an image showing it:
   (https://github.com/nahoom567/SecUnrealNews/assets/128990420/2a9b7e96-fa2e-4237-b1f7-75f5c67e4c15)
   Once you have opened it, change to the stream URL of the server.
