# HMDL
<dl>
<dt>Arduino için Kullanışlı Motor Sürme Kütüphanesi / Handy Motor Drive Library for Arduino</dt><dd></dd>


<dd>Kütüphane arduino kullanan çizgi izleyen vb. robotlarda dc motor sürmeyi pratik hale getirmek için yazılmıştır.</dd>
<dd>This library was written to drive easily two DC motors on the line follower etc. robots that running on the Arduino.</dd>
</dl>
<dl>

<dd>Kütüphanenin çalışması için Arduino programının en başına #include "HMD.h" satırını eklemelisiniz. HMD.SETUP(IN1,IN2,IN3,IN4); satırı ise void SETUP() kısmında olmalıdır.</dd>
<dd>You must add the #include "HMD.h" line top of the Arduino sketch. And HMD.SETUP(IN1,IN2,IN3,IN4); must be in the void SETUP()</dd>
 <dd><dd><table>
      <tr>
         <td>Library Syntax(Kullanılan Kodlar)</td>
         <td>Açıklama</td>
      </tr>
      <tr>
         <td>HMD.forward();</td>
         <td>İleri</td>
      </tr>
      <tr>
         <td>HMD.forwardt(time);</td>
         <td>X mSn İleri</td>
      </tr>
      <tr>
         <td>HMD.backward();</td>
         <td>Geri</td>
      </tr>
      <tr>
         <td>HMD.left();</td>
         <td>Sola Dön</td>
      </tr>
      <tr>
         <td>HMD.right();</td>
         <td>Sağa Dön</td>
      </tr>
      <tr>
         <td>HMD.stop();</td>
         <td>Dur</td>
      </tr>
      
   </table></dd></dd>



<dd>Ayrıca HMD_Example klasörü içinde "HMD.pdsprj" ve "HMD_Example.cpp.hex" dosyasını kullanarak Proteus ISIS üzerinden simülasyonunu yapabilirsiniz.(Proteus için Arduino kütüphanesi yüklü olması gerekmektedir.)</dd>
<dd>Also you can simulate the HMD Library on Proteus ISIS with Arduino Library for ISIS.</dd>
</dl>
