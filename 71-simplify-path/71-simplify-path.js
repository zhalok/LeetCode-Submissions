/**
 * @param {string} path
 * @return {string}
 */
var simplifyPath = function (path) {
  let _path = "";
  for (let i = 0; i < path.length; i++) {
    if (_path.length == 0) _path += path[i];
    if (path[i] == "/" && _path[_path.length - 1] == "/") continue;
    else _path += path[i];
  }

  path = _path;
  let simplifiedPath = "";
  let temp = [];
  path = path.split("/");
  // return path;
  for (let i = 0; i < path.length; i++) {
    if (path[i] != "" && path[i] != ".") {
      if (path[i] == "..") {
        if (temp.length > 0) temp.pop();
      } else temp.push(path[i]);
    }
  }

  // return temp;
  let finalString = "";
  for (let i = 0; i < temp.length; i++) {
    finalString += "/";
    finalString += temp[i];
  }
  if (finalString == "") finalString += "/";
  return finalString;
};

const path = "/../";
console.log(simplifyPath(path));
