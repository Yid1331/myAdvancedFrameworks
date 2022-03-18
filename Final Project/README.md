# My Daily Life

## Motivation
Through this work, I want to express my daily life, which is "sitting in front of the computer forever". Sometimes I feel that my computer contains many of my secrets: what I search for, what channels I watch, and what songs I love most. And furthermore, many of my ideas come from this old computer that has been with me for 6 years. Whenever I sit in front of it there are many little bubbles of inspiration surrounding us, and I love that feeling.

## Inspirations
I was inspired by an Adobe commercial where a boy was sitting in front of his computer thinking about something, just like me, and then his head suddenly disappeared, ejecting many, many things. This is how I feel whenever I get inspiration. A lot of colorful things are popping up in my brain. I would feel that my room and the air around me were filled with something mysterious that made me totally engaged.

## Project Description
A character sitting on a cosmic river of stars is using his computer's crazy output, his brain has turned into become colorful, and his surroundings are filled with many colorful bubbles generated from his brain. The audience can control the song the character is listening to by pressing a button, and as the song changes the scene will also change.
  
<img src=https://user-images.githubusercontent.com/81423727/159054142-8fb26578-fd4a-41b9-a871-04998f9d8ba2.png width=30%/>

<img src=https://user-images.githubusercontent.com/81423727/159054179-9071ca5b-db9e-45e5-8660-59e2e2b6b9f6.png width=30%/>

<img src=https://user-images.githubusercontent.com/81423727/159054197-aa564166-4d4d-4d04-87a9-84c9d2787ea2.png width=30%/>

1.Model
Modeling with Blender and exporting the file in dae format. Use ofxAssimModelLoader function load it into openframeworks.
2. Design inspiration bubble
A for loop was used to make some randomly appearing, randomly oriented spheres. Then applied materials to them.

<img src=https://user-images.githubusercontent.com/81423727/159054249-cf860ded-c9a7-45f0-9041-8bb687398f7f.png width=30%/>

<img src=https://user-images.githubusercontent.com/81423727/159054288-88cac892-efcd-4e68-bc5f-dc85440975ac.png width=30%/>

3.Voices
Design sound and scene with switch and if conditional statements. There are three sounds in total, each representing a different scene. Listening to BBC radio represents daily life, listening to Mick's class represents serious study, and listening to a song represents resting.


## Challenges and Strategies
I used almost everything to express my thoughts with what I had learned this semester. But there are still many challenges.
1.ofxGui
I'm trying to use ofxGui to make my page produce more manipulable buttons, but I can't get the text to show up on top of my GUI panel during the loading process. I think the reason is that my work is a 3D scene. I checked the openframeworks forum and someone else had the same problem as me. The solution is that I need to create another window to host the GUI panel. But this was clearly beyond my capabilities, so I ended up using the syntax ofDrawBitmapString to display the text directly in the scene.

<img src=https://user-images.githubusercontent.com/81423727/159054344-555b41ff-f44b-4eb4-8e4d-5f0ba9fb114f.png width=30%/>


2. Import the 3D model.
At first I planned to use the ply ASCII format and render model directly in openframeworks using the mesh function, but no matter what format I imported it in, the model would not display. However, the models in other formats cannot achieve the character movements I have designed.
Finally, I chose ofxAssimModel to load the model indirectly, except that I built my model directly into the action I wanted, rather than controlling it through the Armature.
 
<img src=https://user-images.githubusercontent.com/81423727/159054377-75221330-7d08-4e2b-bcdb-2b788ec2e5ad.png width=30%/>
