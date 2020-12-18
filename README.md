# Vibration-Feedback
This is a device that receives audio output and transmits vibrations.

It is assumed that when the object collides with the object in the VR space, the sound is output from the HMD to the Arduino and vibration feedback is given to the body.


Things to prepare:

・ Wired earphones

・ Arduino

・ Oscillator


Cut the earphone part, insert the ground into GND, and insert the other into A0.

Attach the terminal part to the HMD etc.

For the oscillator, pay attention to + and ground, insert + into digital No. 11 and ground into GND.

This completes, and when the audio is output from the HMD, the oscillator vibrates.

これは、音声出力を受けて、振動を伝える装置です。

VR空間内でオブジェクトと衝突したときに、HMDからArduinoへ音声を出力し、身体に振動フィードバックを与えることを想定しています。


準備するモノ：
・有線のイヤホン
・Arduino
・振動子


イヤホンの部分を切断し、グランドをGNDに挿し、もう片方をA0に挿します。

端子部分はHMDなどに付けます。

振動子は+とグランドに気をつけ、+をデジタルの11番、グランドをGNDに挿します。

これで完成であり、HMDから音声出力されると、振動子が振動します。
