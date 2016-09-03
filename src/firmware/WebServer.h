#pragma once

#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <Scheduler.h>

/**
 * Manages the web server.
 */
class WebServerTask : public Task {

public:
    
    /**
     * Constructs a new WebServerTask.
     * 
     * @param[in] domain        The domain that the server will be available it
     */
    WebServerTask(const char* domain);
    
protected:

    /**
     * Initializes the store and web server.
     */
    void setup();

    /**
     * Handles incoming connections.
     */
    void loop();

private:

    bool parse(String key, String value);
    void handleSettingsSave();
    void handleSettingsGet();
    void handleReset();
    void handleResetSettings();
    String getColorCode(int value);

    const char* domain;
    MDNSResponder mdns;
    ESP8266WebServer server;

};
