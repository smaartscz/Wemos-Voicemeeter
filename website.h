const char htmlPage[] PROGMEM = R"=====(
<html>

<head>
    <meta http-equiv="content-type" content="text/html;charset=UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/js/bootstrap.min.js"></script>
    <title>Hello from HTTP Server ESP8266</title>
</head>

<body>
    <div class="container">
        <h1>ESP8266 HTTP Server</h1>
        <p>Hello from ESP8266 HTTP Server. Selection of <b>Bootstrap</b> CSS styles.</p>
        <h2>H2</h2>
        <h3>H3</h3>
        <h4>H4</h4>
        <h1>Buttons</h1>
        <p>
            <button type="button" class="btn btn-default">Default</button>
            <button type="button" class="btn btn-primary">Primary</button>
            <button type="button" class="btn btn-success">Success</button>
            <button type="button" class="btn btn-info">Info</button>
            <button type="button" class="btn btn-warning">Warning</button>
            <button type="button" class="btn btn-danger">Danger</button>
            <button type="button" class="btn btn-link">Link</button>
        </p>

        <h1>Alerts</h1>
        <div class="alert alert-success" role="alert">
            <strong>Well done!</strong> You successfully read this important alert message.
        </div>
        <div class="alert alert-info" role="alert">
            <strong>Heads up!</strong> This alert needs your attention, but it's not super important.
        </div>
        <div class="alert alert-warning" role="alert">
            <strong>Warning!</strong> Best check yo self, you're not looking too good.
        </div>
        <div class="alert alert-danger" role="alert">
            <strong>Oh snap!</strong> Change a few things up and try submitting again.
        </div>

        <p>Copyright (C) 2019 <a href="https://www.arduinoslovakia.eu">Arduino Slovakia</a>.</p>
    </div>
</body>

</html>
)=====";