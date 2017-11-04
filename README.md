# bs-react-native-linear-gradient

A `<LinearGradient>` component for react-native

Version 2.0 supports react-native >= 0.40.0

## Add it to your project

You can try linking the project automatically:

`$ react-native link`

or do it manually as described below:

### iOS

- Run `npm install react-native-linear-gradient --save`

Then either:

##### Cocoapods
add the following line to your Podfile:

```sh
pod 'React', :path => '../node_modules/react-native'
pod 'BVLinearGradient', :path => '../node_modules/react-native-linear-gradient'
```

or:

##### Manually

1. Open your project in XCode, right click on `Libraries` and click `Add
   Files to "Your Project Name"` Look under `node_modules/react-native-linear-gradient` and add `BVLinearGradient.xcodeproj`.  [(Screenshot)](http://url.brentvatne.ca/g9Wp).
2. Add `libBVLinearGradient.a` to `Build Phases -> Link Binary With Libraries`
   [(Screenshot)](http://url.brentvatne.ca/g9Wp).
3. Click on `BVLinearGradient.xcodeproj` in `Libraries` and go the `Build
   Settings` tab. Double click the text to the right of `Header Search
   Paths` and verify that it has `$(SRCROOT)/../react-native/React` - if it
   isn't, then add it. This is so XCode is able to find the headers that
   the `BVLinearGradient` source files are referring to by pointing to the
   header files installed within the `react-native` `node_modules`
   directory. [(Screenshot)](http://url.brentvatne.ca/7wE0).

Then:


- Whenever you want to use it within React code now you can: `import LinearGradient from 'react-native-linear-gradient';`


**If you're having trouble, you can point your `package.json` at github to see if the issue has been fixed.  Simply change the dependency**

`"react-native-linear-gradient": "react-native-community/react-native-linear-gradient",`

**to get the data right from github instead of npm and then `npm install`**

For instance the podspec file does not contain the right data (author attributes etc..) in npm while it does in the github repo.

#### Android

1. in `android/settings.gradle`
```
...
include ':react-native-linear-gradient'
project(':react-native-linear-gradient').projectDir = new File(rootProject.projectDir, '../node_modules/react-native-linear-gradient/android')
```

2. in `android/app/build.gradle` add:
```
dependencies {
    ...
    compile project(':react-native-linear-gradient')
}
```

3. and finally, in `android/src/main/java/com/{YOUR_APP_NAME}/MainActivity.java` for react-native < 0.29,
   or `android/src/main/java/com/{YOUR_APP_NAME}/MainApplication.java` for react-native >= 0.29 add:
```java
//...
import com.BV.LinearGradient.LinearGradientPackage; // <--- This!
//...
@Override
protected List<ReactPackage> getPackages() {
  return Arrays.<ReactPackage>asList(
    new MainReactPackage(),
    new LinearGradientPackage() // <---- and This!
  );
}
```

## Examples

### License

License is MIT