[@bs.module "react-native-linear-gradient"] external linearGradient : ReasonReact.reactClass =
  "default";

let make = (~colors: array(string), ~style=?, ~locations: array(float), children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=linearGradient,
    ~props={"colors": colors, "style": style, "locations": locations},
    children
  );